class DateRange(val start: MyDate, val end: MyDate) : Iterable<MyDate> {
    override fun iterator(): Iterator<MyDate> = DateIterator(start, end)
}

class DateIterator(val start: MyDate, val end: MyDate) : Iterator<MyDate> {
    var hasNext = start <= end
    var next = if (hasNext) start else end

    override fun hasNext(): Boolean = hasNext

    override fun next(): MyDate {
        val result = next
        next = next.nextDay()
        hasNext = next <= end
        return result
    }
}

fun iterateOverDateRange(firstDate: MyDate, secondDate: MyDate, handler: (MyDate) -> Unit) {
    for (date in firstDate..secondDate) {
        handler(date)
    }
}

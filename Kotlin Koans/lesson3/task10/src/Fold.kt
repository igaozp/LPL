// Return the set of products that were ordered by every customer
fun Shop.getSetOfProductsOrderedByEveryCustomer(): Set<Product> {
    val allProducts = customers.flatMap { it.orders.flatMap { it.products } }.toSet()
    return customers.fold(allProducts, { orderedAll, customer ->
        orderedAll.intersect(customer.orders.flatMap { it.products }.toSet())
    })
}

// Return customers who have more undelivered orders than delivered
fun Shop.getCustomersWithMoreUndeliveredOrdersThanDelivered(): Set<Customer> = this.customers.filter { it.orders.filter { it.isDelivered }.size < it.orders.size }.toSet()

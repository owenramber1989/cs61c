#include "ll_cycle.h"
#include <stddef.h>

int ll_has_cycle(node *head) {
  /* TODO: Implement ll_has_cycle */
  node *fast_ptr = head;
  node *slow_ptr = head;
  while (fast_ptr) {
    fast_ptr = fast_ptr->next;
    fast_ptr = fast_ptr->next;
    slow_ptr = slow_ptr->next;
    if (!fast_ptr)
      return 0;
    if (fast_ptr == slow_ptr)
      return 1;
  }
  return 0;
}

/* OPTIONAL: Pools to replace heap allocation
 * Optional: Pools can be used instead of the heap for mem_malloc. If
 * so, these should be defined here, in increasing order according to
 * the pool element size.
 *
 * LWIP_MALLOC_MEMPOOL(number_elements, element_size)
 */
#if MEM_USE_POOLS
LWIP_MALLOC_MEMPOOL_START
LWIP_MALLOC_MEMPOOL(130000, 1552) // was 1544: we had to increase it to support tot_len in pbuf of 32 bit (instead of 16); TODO: try optimize size!
LWIP_MALLOC_MEMPOOL_END
#endif /* MEM_USE_POOLS */



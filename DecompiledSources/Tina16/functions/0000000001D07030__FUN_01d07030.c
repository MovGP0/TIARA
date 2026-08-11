/* Ghidra address: 01d07030 */
/* Ghidra symbol: FUN_01d07030 */


void FUN_01d07030(longlong param_1,int param_2)

{
  double *pdVar1;
  undefined1 local_1b;
  undefined1 local_1a;
  char local_19;
  
  pdVar1 = (double *)
           FUN_01cfde70(*(undefined8 *)(param_1 + 0x60),**(short **)(param_1 + 0x28) + 1,0,&local_19
                        ,&local_1a,&local_1b);
  if ((local_19 == '\x03') || (local_19 == '\x06')) {
    FUN_01d3a010(pdVar1,local_19,
                 *pdVar1 + (double)param_2 * *(double *)(*(longlong *)(param_1 + 0x28) + 0x10));
  }
  return;
}


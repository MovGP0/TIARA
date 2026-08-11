/* Ghidra address: 01995600 */
/* Ghidra symbol: FUN_01995600 */


char FUN_01995600(longlong param_1,undefined2 param_2)

{
  char cVar1;
  undefined1 auStack_38 [40];
  
  cVar1 = *(char *)(param_1 + 0x380);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x390) = 0xffffffff;
    FUN_019954f0(auStack_38);
    FUN_01995800(param_1,0,param_2);
  }
  return cVar1;
}


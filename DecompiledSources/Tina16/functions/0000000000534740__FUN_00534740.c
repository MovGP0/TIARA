/* Ghidra address: 00534740 */
/* Ghidra symbol: FUN_00534740 */


ulonglong FUN_00534740(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00534680();
  uVar2 = thunk_FUN_0410b8fa(uVar1,0,param_2);
  if ((uVar2 & 0xffffffff) == 0xffffffffffffffff) {
    uVar2 = 0;
  }
  return uVar2;
}


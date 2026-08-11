/* Ghidra address: 00682d60 */
/* Ghidra symbol: FUN_00682d60 */


undefined8 FUN_00682d60(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_28;
  undefined1 local_24 [8];
  int iStack_1c;
  
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar2,0xb0,&local_28,local_24);
  uVar2 = FUN_0065b870(param_1);
  iVar1 = thunk_FUN_041b2403(uVar2,0xc9,(longlong)local_28,0);
  iStack_1c = iVar1;
  uVar2 = FUN_0065b870(param_1);
  iVar1 = thunk_FUN_041b2403(uVar2,0xbb,(longlong)iVar1,0);
  return CONCAT44(iStack_1c,local_28 - iVar1);
}


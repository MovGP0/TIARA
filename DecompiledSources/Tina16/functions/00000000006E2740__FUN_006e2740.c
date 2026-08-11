/* Ghidra address: 006e2740 */
/* Ghidra symbol: FUN_006e2740 */


undefined8 FUN_006e2740(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_0065b870();
  lVar3 = thunk_FUN_041b2403(uVar2,0x110f,0,0);
  if ((lVar3 != 0) && (iVar1 = thunk_FUN_0419e3da(lVar3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


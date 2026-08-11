/* Ghidra address: 01b27220 */
/* Ghidra symbol: FUN_01b27220 */


ulonglong FUN_01b27220(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 unaff_RDI;
  
  *param_3 = 0;
  uVar1 = FUN_01b263a0(param_1,param_2);
  iVar2 = FUN_01b262e0(param_1,param_2,uVar1);
  if (-1 < iVar2) {
    FUN_00414ad0(param_3,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18)
                );
  }
  else {
    FUN_00414480(param_3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),-1 < iVar2) & 0xffffffff;
}


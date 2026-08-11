/* Ghidra address: 00df48b0 */
/* Ghidra symbol: FUN_00df48b0 */


void FUN_00df48b0(longlong param_1,longlong param_2,byte param_3,ulonglong param_4,double param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  bool bVar5;
  double dVar6;
  double unaff_XMM6_Qa;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar2 = FUN_01b05690(**(undefined8 **)(lVar1 + 0x40),**(undefined1 **)(lVar1 + 0x50),1);
  uVar3 = FUN_01b05690(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 8),
                       *(undefined1 *)(*(longlong *)(lVar1 + 0x50) + 1),1);
  if (param_3 < 8) {
    bVar5 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << (param_3 & 0x1f) & 0x22U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) {
    unaff_XMM6_Qa = **(double **)(lVar1 + 0x18);
  }
  uVar4 = (undefined4)uVar3;
  if ((param_3 == 1) || (param_3 == 5)) {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,uVar2,uVar4);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,uVar3 & 0xffffffff,uVar2);
  }
  else if (param_3 == 6) {
    dVar6 = (double)FUN_01b08a00(param_2,0);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,unaff_XMM6_Qa * dVar6,uVar2,uVar4);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,unaff_XMM6_Qa * dVar6,uVar3 & 0xffffffff,uVar2);
  }
  else if (param_3 == 8) {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,param_5 * unaff_XMM6_Qa,uVar2,uVar4);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,param_5 * unaff_XMM6_Qa,uVar3 & 0xffffffff,uVar2)
    ;
  }
  return;
}


/* Ghidra address: 0196f130 */
/* Ghidra symbol: FUN_0196f130 */


ulonglong FUN_0196f130(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  uVar5 = 0;
  uVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x278);
    uVar4 = *(undefined8 *)(lVar1 + 0x298);
  }
  iVar2 = FUN_0043e420(*(undefined8 *)(param_2 + 0x20),L"Datasets");
  if (iVar2 == 0) {
    if (*(longlong *)(param_1 + 0x200) != 0) {
      FUN_004b1e70(*(undefined8 *)(param_1 + 0x170));
    }
    FUN_0180f880(*(undefined8 *)(param_1 + 0x170),param_2,param_1,0);
  }
  else {
    iVar2 = FUN_0043e420(*(undefined8 *)(param_2 + 0x20),L"Variables");
    if (iVar2 == 0) {
      FUN_0180f880(*(undefined8 *)(param_1 + 0x298),param_2,param_1,uVar4);
    }
    else {
      iVar2 = FUN_0043e420(*(undefined8 *)(param_2 + 0x20),L"Styles");
      if (iVar2 == 0) {
        FUN_0180f880(*(undefined8 *)(param_1 + 0x278),param_2,param_1,uVar5);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3 & 0xffffffff;
}


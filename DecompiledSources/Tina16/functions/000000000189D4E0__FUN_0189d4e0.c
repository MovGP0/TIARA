/* Ghidra address: 0189d4e0 */
/* Ghidra symbol: FUN_0189d4e0 */


void FUN_0189d4e0(longlong *param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_004b3260(param_1);
  FUN_0189d480();
  iVar2 = FUN_004b2060();
  uVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_0189d480();
      uVar5 = (ulonglong)uVar6;
      lVar4 = FUN_0189d6b0(uVar3,uVar5);
      bVar1 = (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x90))(*(longlong **)(lVar4 + 0x18));
      if (param_2 < 8) {
        bVar7 = ((byte)((int)CONCAT71((int7)(uVar5 >> 8),1) << (param_2 & 0x1f)) & bVar1) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        uVar3 = FUN_0189d480();
        lVar4 = FUN_0189d6b0(uVar3,uVar6);
        (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x108))(**(longlong **)(lVar4 + 0x18),local_30)
        ;
        uVar3 = FUN_0189d480();
        lVar4 = FUN_0189d6b0(uVar3,uVar6);
        (**(code **)(*param_1 + 0x80))(param_1,local_30[0],*(undefined8 *)(lVar4 + 0x18));
      }
      uVar6 = uVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004b3390(param_1);
  FUN_00414480(local_30);
  return;
}


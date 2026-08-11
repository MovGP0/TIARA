/* Ghidra address: 00d7d6b0 */
/* Ghidra symbol: FUN_00d7d6b0 */


undefined8 FUN_00d7d6b0(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 unaff_RDI;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar7;
  uint uVar8;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (param_3 < 4) {
    if (param_3 == 3) {
      uVar5 = CONCAT71(uVar6,3);
      goto LAB_00d7d722;
    }
    if (param_3 == 0) {
      uVar5 = 0;
      goto LAB_00d7d722;
    }
    if (param_3 == 1) {
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_00d7d722;
    }
    if (param_3 == 2) {
      uVar5 = CONCAT71(uVar6,2);
      goto LAB_00d7d722;
    }
  }
  else {
    if (param_3 == 4) {
      uVar5 = CONCAT71(uVar6,5);
      goto LAB_00d7d722;
    }
    if (param_3 == 5) {
      uVar5 = CONCAT71(uVar6,6);
      goto LAB_00d7d722;
    }
  }
  uVar5 = 0;
LAB_00d7d722:
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
  if ((lVar1 == 0) || (iVar4 = FUN_00d74940(lVar1), iVar4 < 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) &&
     (cVar3 = FUN_00d8d9f0(*(undefined8 *)(param_1 + 8),uVar5 & 0xffffffff,L"default",0),
     cVar3 == '\0')) {
    uVar5 = 0;
  }
  if ((bVar2) &&
     (cVar3 = FUN_00d8d9f0(*(undefined8 *)(param_1 + 8),uVar5 & 0xffffffff,L"default",0),
     cVar3 != '\0')) {
    FUN_004238d0(local_38,0,0,400,CONCAT44(uVar8,400));
    uVar7 = 0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x98))
              (*(longlong **)(param_1 + 8),&local_48,uVar5 & 0xffffffff,local_38,L"default");
    FUN_00d7d5f0(param_2,local_48,local_44,local_30 - local_40,CONCAT44(uVar7,local_2c - local_3c));
    return param_2;
  }
  FUN_00d7d5f0(param_2,0,0,0,(ulonglong)uVar8 << 0x20);
  return param_2;
}


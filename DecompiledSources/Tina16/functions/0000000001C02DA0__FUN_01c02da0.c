/* Ghidra address: 01c02da0 */
/* Ghidra symbol: FUN_01c02da0 */


void FUN_01c02da0(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_68 [4];
  int local_64;
  int local_5c;
  int local_58 [2];
  int local_50;
  int local_40;
  int local_3c;
  
  local_40 = param_3;
  local_3c = param_4;
  lVar2 = FUN_01c01390(param_1,&local_40);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if ((lVar4 != 0) && (lVar2 == lVar4)) {
    return;
  }
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 800) == 0)) {
    uVar3 = FUN_01c019a0(param_1);
    (**(code **)(**(longlong **)(param_2 + 0x58) + 0x20))(*(longlong **)(param_2 + 0x58),uVar3);
  }
  else {
    iVar5 = 0;
    FUN_0064d000(lVar2,local_58);
    if ((local_50 < param_3) || (FUN_0064d000(lVar2,local_68), local_5c < param_4)) {
      iVar1 = FUN_004b1870(*(undefined8 *)(lVar2 + 800));
      lVar4 = FUN_01bfd960(*(undefined8 *)(lVar2 + 800));
      if (iVar1 < *(int *)(*(longlong *)(lVar4 + 0x10) + 0x10) + -1) {
        iVar5 = 1;
      }
    }
    FUN_0064d000(lVar2,local_58);
    if ((param_3 < local_58[0]) || (FUN_0064d000(lVar2,local_68), param_4 < local_64)) {
      iVar5 = 0;
    }
    uVar3 = FUN_01c019a0(param_1);
    (**(code **)(**(longlong **)(param_2 + 0x58) + 0x20))(*(longlong **)(param_2 + 0x58),uVar3);
    iVar1 = FUN_004b1870(*(undefined8 *)(lVar2 + 800));
    (**(code **)(**(longlong **)(param_2 + 0x58) + 0x28))
              (*(longlong **)(param_2 + 0x58),iVar1 + iVar5);
  }
  (**(code **)(*param_1 + 0x340))(param_1,*(undefined8 *)(param_2 + 0x58));
  return;
}


/* Ghidra address: 010b48b0 */
/* Ghidra symbol: FUN_010b48b0 */


void FUN_010b48b0(longlong param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int local_4c;
  longlong local_48;
  int local_40;
  int local_3c;
  longlong *local_38;
  longlong *local_30;
  
  local_60 = auStack_88;
  local_38 = (longlong *)FUN_00a39860(&PTR_FUN_00a2f148,1);
  local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x60))(*(longlong **)(param_1 + 0x70));
  (**(code **)(*local_30 + 0x88))(local_30,uVar1);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x48))(*(longlong **)(param_1 + 0x70));
  (**(code **)(*local_30 + 0x70))(local_30,uVar1);
  (**(code **)(*local_38 + 0x10))(local_38,local_30);
  FUN_00410f20(local_30);
  FUN_00a3c4c0(local_38);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x48))();
  local_40 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_48 = FUN_00a3c1b0(local_38,local_40);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x60))();
      local_3c = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_4c = (**(code **)(**(longlong **)(param_1 + 0x70) + 0xe8))
                               (*(longlong **)(param_1 + 0x70),local_3c,local_40);
          (**(code **)(*local_38 + 0xf0))(local_38,local_3c,local_40,local_4c);
          if ((param_2 == '\0') || (local_4c != param_3)) {
            *(undefined1 *)(local_48 + local_3c) = *(undefined1 *)(param_1 + 0x78);
          }
          else {
            *(undefined1 *)(local_48 + local_3c) = 0;
          }
          local_3c = local_3c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_40 = local_40 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))(*(longlong **)(param_1 + 0x70),local_38);
  FUN_00410f20(local_38);
  return;
}


/* Ghidra address: 01ba1e60 */
/* Ghidra symbol: FUN_01ba1e60 */


void FUN_01ba1e60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  FUN_00415430(&local_30,param_2,0);
  FUN_00416880(&local_38,local_30);
  FUN_00416e20(&local_38,1,1);
  uVar2 = 0;
  if (local_38 != 0) {
    uVar2 = *(undefined4 *)(local_38 + -4);
  }
  FUN_00416e20(&local_38,uVar2,1);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(plVar4,local_38);
  iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
  if (iVar1 != 0x40) {
    FUN_004156b0(&local_40,local_res18[0],": elf variable size mismatch");
    FUN_00416880(&local_48,local_40);
    FUN_01ba2120(param_1,local_48);
  }
  iVar1 = (**(code **)(*plVar4 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_50,iVar5);
      uVar2 = FUN_0043fc00(local_50);
      iVar3 = FUN_00417250(PTR_s_piece_01fdce48,local_res18[0],1);
      if (iVar3 < 1) {
        iVar3 = FUN_00417250(PTR_s_color_01fdce50,local_res18[0],1);
        if (iVar3 < 1) {
          FUN_01ba2120(param_1,L"Elf variable name mismatch");
        }
        else {
          *(undefined4 *)(param_1 + 0x63c + (longlong)iVar5 * 4) = uVar2;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x53c + (longlong)iVar5 * 4) = uVar2;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar4);
  FUN_00414560(&local_50,2);
  FUN_004144d0(&local_40);
  FUN_00414480(&local_38);
  FUN_004144d0(&local_30);
  FUN_004144d0(local_res18);
  return;
}


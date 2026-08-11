/* Ghidra address: 0147c100 */
/* Ghidra symbol: FUN_0147c100 */


void FUN_0147c100(longlong *param_1,longlong param_2,int param_3,undefined4 param_4,
                 undefined8 *param_5,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_140 [31];
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  if (-1 < param_3) {
    iVar1 = FUN_0064dc90(param_1);
    if (param_3 <= iVar1) {
      if (*(int *)(param_5 + 0x10) == 1) {
        local_48 = param_3;
        local_44 = FUN_0064dc90(param_1);
        local_40 = FUN_00416740(param_5[0xf]);
        iVar1 = FUN_0064fca0(param_1,0x438,1,&local_48);
        if (iVar1 != -1) {
          (**(code **)(*param_1 + 600))(param_1);
          (**(code **)(*param_1 + 0x290))(param_1,iVar1);
          uVar2 = 0;
          if (param_5[0xf] != 0) {
            uVar2 = *(undefined4 *)(param_5[0xf] + -4);
          }
          (**(code **)(*param_1 + 0x288))(param_1,uVar2);
          FUN_0147c060(param_1,param_5);
          (**(code **)(*param_1 + 0x290))(param_1,0xffffffff);
          (**(code **)(*param_1 + 0x288))(param_1,0);
        }
      }
      if (param_6 == '\0') {
        local_48 = param_3;
        local_44 = FUN_0064dc90(param_1);
        local_40 = FUN_00416740(*(undefined8 *)(param_2 + 0x78));
        iVar1 = FUN_0064fca0(param_1,0x438,1,&local_48);
        if (iVar1 != -1) {
          (**(code **)(*param_1 + 600))(param_1);
          (**(code **)(*param_1 + 0x290))(param_1,iVar1);
          uVar2 = 0;
          if (*(longlong *)(param_2 + 0x78) != 0) {
            uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x78) + -4);
          }
          (**(code **)(*param_1 + 0x288))(param_1,uVar2);
          FUN_0147c010(local_140,param_1);
          puVar4 = local_140;
          puVar5 = param_5;
          for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
          FUN_00414ad0(param_5 + 0xf,*(undefined8 *)(param_2 + 0x78));
          *(undefined4 *)(param_5 + 0x10) = 1;
          FUN_0147c090(param_1,param_4);
          (**(code **)(*param_1 + 0x290))(param_1,0xffffffff);
          (**(code **)(*param_1 + 0x288))(param_1,0);
        }
      }
      else {
        (**(code **)(*param_1 + 0x290))(param_1,0xffffffff);
        (**(code **)(*param_1 + 0x288))(param_1,0);
      }
    }
  }
  return;
}


/* Ghidra address: 01c3bc80 */
/* Ghidra symbol: FUN_01c3bc80 */


void FUN_01c3bc80(longlong param_1,char param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [5];
  
  local_58 = 0;
  local_50 = 0;
  if (param_2 != '\0') {
    local_48[0] = FUN_004b6930(&PTR_FUN_00478280,1);
    local_48[1] = FUN_004b6930(&PTR_FUN_00478280,1);
    local_48[2] = FUN_004b6930(&PTR_FUN_00478280,1);
    local_48[3] = FUN_004b6930(&PTR_FUN_00478280,1);
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x8e0) + 0x4e0) + -1;
    iVar6 = 1;
    if (0 < iVar7) {
      do {
        uVar2 = FUN_01c37140(*(undefined4 *)
                              (*(longlong *)(param_1 + 0x988) + (longlong)(iVar6 + -1) * 4));
        bVar1 = (&DAT_01fe6550)[uVar2 & 0xff];
        FUN_0084e320(*(undefined8 *)(param_1 + 0x8e0),&local_50,1,iVar6);
        (**(code **)(*(longlong *)local_48[bVar1] + 0x78))((longlong *)local_48[bVar1],local_50);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),&local_58);
    uVar3 = FUN_00c3da20(&LAB_00c3a6d0,1,local_58,local_48);
    FUN_01c3d2f0(param_1,uVar3);
    FUN_00410f20(local_48[0]);
    FUN_00410f20(local_48[1]);
    FUN_00410f20(local_48[2]);
    FUN_00410f20(local_48[3]);
  }
  plVar4 = (longlong *)FUN_00741ea0(*(undefined8 *)(param_1 + 0x8b0));
  FUN_0064d000(*(undefined8 *)(param_1 + 0x8b0),local_68);
  (**(code **)(*plVar4 + 0xa8))(plVar4,local_68);
  uVar3 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x8b0));
  FUN_0064d000(*(undefined8 *)(param_1 + 0x8b0),local_68);
  uVar5 = FUN_01c3d280(param_1);
  FUN_01c3f340(param_1,uVar3,local_68,uVar5);
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  return;
}


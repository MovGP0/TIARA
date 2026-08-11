/* Ghidra address: 01ccdfb0 */
/* Ghidra symbol: FUN_01ccdfb0 */


void FUN_01ccdfb0(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_01d2b010(param_1,param_2);
  if ((*(longlong *)(param_1 + 0x60) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0xd8);
    uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,*(undefined8 *)(param_1 + 0x68));
    uVar5 = FUN_01cd6670(param_1);
    if ((byte)uVar5 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 0x51U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x70);
      uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
      if (param_2 == '\0') {
        FUN_01aee9c0(&local_28,0x430,uVar3,uVar4);
        FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_28);
      }
      else {
        FUN_01aee9c0(local_20,0x426,uVar3,uVar4);
        FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_20[0]);
      }
    }
    else {
      uVar5 = FUN_01cd6670(param_1);
      if ((byte)uVar5 < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 0xa6U) !=
                0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x78);
        uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
        if (param_2 == '\0') {
          FUN_01aee9c0(&local_38,0x431,uVar3,uVar4);
          FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_38);
        }
        else {
          FUN_01aee9c0(&local_30,0x427,uVar3,uVar4);
          FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_30);
        }
      }
      else {
        cVar2 = FUN_01cd6670(param_1);
        if (cVar2 == '\x03') {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x78);
          uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
          if (param_2 == '\0') {
            FUN_01aee9c0(&local_48,0x432,uVar3,uVar4);
            FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_48);
          }
          else {
            FUN_01aee9c0(&local_40,0x428,uVar3,uVar4);
            FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_40);
          }
        }
      }
    }
  }
  FUN_00414560(&local_48,6);
  return;
}


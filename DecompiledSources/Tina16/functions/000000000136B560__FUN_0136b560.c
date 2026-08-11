/* Ghidra address: 0136b560 */
/* Ghidra symbol: FUN_0136b560 */


undefined1 FUN_0136b560(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40;
  undefined1 local_34 [4];
  longlong *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_58 = 0;
  local_50[0] = 0;
  local_40 = 0;
  if (*(longlong *)PTR_DAT_020037b0 != 0) {
    puVar6 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)(param_1 + 0x10),0);
    FUN_01cc37d0(*(undefined8 *)(*(longlong *)PTR_DAT_020037b0 + 8),local_50);
    iVar3 = FUN_00416db0(*puVar6,local_50[0]);
    if (iVar3 == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x27a8);
      uVar7 = FUN_0198d430(plVar1);
      FUN_01a982d0(uVar7,param_2,param_3,&local_24,&local_28);
      local_1c = local_24;
      local_20 = local_28;
      FUN_01b1cd00(&local_1c,&local_20);
      iVar3 = FUN_01995e50(plVar1,local_1c,local_20,&local_30,local_34);
      if (iVar3 < 0) {
        local_30 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,local_24,local_28);
        if (local_30 != (longlong *)0x0) {
          cVar2 = FUN_0198a580(local_30);
          if (cVar2 == '\x04') {
            uVar4 = FUN_019ac2d0(plVar1,local_30);
            (**(code **)(*local_30 + 0x288))(local_30,&local_40);
            if (local_40 == 0) {
              FUN_0043f750(&local_58,uVar4);
              FUN_00416ba0(&local_40,L"no_label_",local_58);
            }
            if (*(longlong *)PTR_DAT_02002418 == 0) {
              if (*(char *)(*(longlong *)PTR_DAT_02003ba0 + 0xa9) != '\0') {
                uVar4 = (**(code **)(*local_30 + 0x210))(local_30,0);
                uVar5 = (**(code **)(*local_30 + 0x210))(local_30,1);
                FUN_013cca60(*(undefined8 *)PTR_DAT_02003ba0,local_40,uVar4,uVar5);
              }
            }
            else {
              uVar4 = (**(code **)(*local_30 + 0x210))(local_30,0);
              uVar5 = (**(code **)(*local_30 + 0x210))(local_30,1);
              FUN_0135db30(*(undefined8 *)PTR_DAT_02002418,local_40,uVar4,uVar5);
            }
            goto LAB_0136b823;
          }
        }
        thunk_FUN_03f3ed6d(0xffff);
      }
      else if (*(longlong *)PTR_DAT_02002418 == 0) {
        if (*(char *)(*(longlong *)PTR_DAT_02003ba0 + 0xa9) != '\0') {
          FUN_013ccc70(*(undefined8 *)PTR_DAT_02003ba0,iVar3);
        }
      }
      else {
        FUN_0135dea0(*(undefined8 *)PTR_DAT_02002418,iVar3);
      }
LAB_0136b823:
      local_59 = 0;
      goto LAB_0136b829;
    }
  }
  FUN_013cca60(*(undefined8 *)PTR_DAT_02003ba0,&DAT_0136b888,0xffffff9c,0xffffff9c);
  FUN_013ccc70(*(undefined8 *)PTR_DAT_02003ba0,0xffffff9c);
LAB_0136b829:
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_40);
  return local_59;
}


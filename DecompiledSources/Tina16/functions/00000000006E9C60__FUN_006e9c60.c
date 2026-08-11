/* Ghidra address: 006e9c60 */
/* Ghidra symbol: FUN_006e9c60 */


void FUN_006e9c60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 *local_38 [2];
  undefined1 *local_28;
  int local_1c;
  
  local_60 = auStack_98;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_28 = (undefined1 *)0x0;
  FUN_00417580(local_38,&DAT_006bdbc8);
  FUN_00417580(local_48,&DAT_006bdbc8);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x260))(*(longlong **)(param_1 + 0x38),0x7ffffff0);
  FUN_00441a10(&local_70,param_2);
  FUN_004168e0(&local_78,local_70);
  FUN_0043e890(&local_68,local_78);
  FUN_004168b0(&local_28,local_68);
  FUN_00416e20(&local_28,1,1);
  FUN_00417c40(local_38,&PTR_PTR_01dfdb98,&DAT_006bdbc8);
  iVar3 = *(int *)(DAT_02012460 + 0x10);
  local_1c = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_004aeac0(DAT_02012460,local_1c);
      FUN_00417c40(local_48,uVar2,&DAT_006bdbc8);
      iVar1 = FUN_00416db0(local_40,local_28);
      if (iVar1 == 0) {
        FUN_00417c40(local_38,local_48,&DAT_006bdbc8);
        break;
      }
      local_1c = local_1c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar2 = (*(code *)*local_38[0])(local_38[0],1);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  FUN_004b4460(param_1,param_2,param_3);
  FUN_00414520(&local_78);
  FUN_00414480(&local_70);
  FUN_00414520(&local_68);
  FUN_00417840(local_48,&DAT_006bdbc8,2);
  FUN_00414480(&local_28);
  return;
}


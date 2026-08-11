/* Ghidra address: 01a022a0 */
/* Ghidra symbol: FUN_01a022a0 */


void FUN_01a022a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00415dd0(&local_38,local_res10[0],0);
  FUN_00416ba0(&local_40,*(undefined8 *)PTR_DAT_020049a0,L"\\EXAMPLES\\SPICE\\TSpice.LIB");
  FUN_019ecfc0(param_1,&local_28,local_38,local_40);
  if (local_28 != 0) {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar2 = FUN_00416740(local_28);
    FUN_004ae3e0(&DAT_01a0249e,&DAT_01a024be,uVar2,local_20);
    (**(code **)(*local_20 + 0x18))(local_20,&local_48,0);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0xb0))
                      (*(longlong **)(param_1 + 0xb8),local_48);
    if (iVar1 == -1) {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x78))(*(longlong **)(param_1 + 0xb8),0);
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x88))(*(longlong **)(param_1 + 0xb8),local_20)
      ;
    }
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_48,2);
  FUN_004144d0(&local_38);
  FUN_00414480(&local_28);
  FUN_00414480(local_res10);
  return;
}


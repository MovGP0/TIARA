/* Ghidra address: 00ce8ae0 */
/* Ghidra symbol: FUN_00ce8ae0 */


undefined1 FUN_00ce8ae0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_19;
  longlong *local_18;
  longlong *local_10;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_19 = 0;
  local_10 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00ce87c0(auStack_68);
  iVar2 = (**(code **)(*local_10 + 0x28))(local_10);
  if (iVar2 == 0) {
    FUN_00ce8bc0(0,local_30);
  }
  else {
    FUN_004b3cf0(local_10,&local_38,0);
    FUN_00414ad0(param_1 + 0x30,local_38);
    FUN_00879940(&local_40,local_10,0);
    FUN_00414ad0(param_1 + 0x48,local_40);
    plVar1 = local_10;
    local_19 = 1;
    local_18 = local_10;
    local_10 = (longlong *)0x0;
    FUN_00410f20(plVar1);
  }
  FUN_00414560(&local_40,2);
  return local_19;
}


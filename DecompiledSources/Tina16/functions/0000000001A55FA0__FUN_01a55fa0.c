/* Ghidra address: 01a55fa0 */
/* Ghidra symbol: FUN_01a55fa0 */


void FUN_01a55fa0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10;
  longlong *local_res18;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  int local_1c;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_28 + 0x60))(local_28,local_res10);
  (**(code **)(*local_res18 + 0x90))(local_res18);
  iVar2 = (**(code **)(*local_28 + 0x28))();
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_28 + 0x18))(local_28,&local_58,local_1c);
      FUN_01a3cb20(&local_30,local_58);
      cVar1 = FUN_01a55eb0(auStack_78,local_30,&local_38);
      if (cVar1 != '\0') {
        (**(code **)(*local_res18 + 0x78))(local_res18,local_38);
      }
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_58);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_res10);
  return;
}


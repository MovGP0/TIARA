/* Ghidra address: 00cd5660 */
/* Ghidra symbol: FUN_00cd5660 */


void FUN_00cd5660(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = param_2;
  if (param_2 != *(longlong *)(param_1 + 0x18)) {
    cVar1 = FUN_00cd5610(auStack_38,param_2);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_10,PTR_PTR_02001ca8);
      uVar2 = FUN_0044d490(&PTR_FUN_00cd3cf8,1,local_10);
      FUN_004134c0(uVar2);
    }
    else {
      FUN_00cd57f0(*(undefined8 *)(param_1 + 0x18));
      *(longlong *)(param_1 + 0x18) = local_18;
      FUN_00cd5830(local_18);
    }
  }
  FUN_00414480(&local_10);
  return;
}


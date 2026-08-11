/* Ghidra address: 00d06230 */
/* Ghidra symbol: FUN_00d06230 */


void FUN_00d06230(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_30 = 0;
  FUN_00ce45c0(param_1[0x25],param_1[0x23]);
  iVar1 = (**(code **)(**(longlong **)(param_1[0x25] + 0x18) + 0x28))
                    (*(longlong **)(param_1[0x25] + 0x18));
  if (0 < iVar1) {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00cd8a40(*(undefined8 *)(param_1[0x25] + 0x18),local_20);
    iVar1 = (**(code **)(*local_20 + 0x28))();
    local_24 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_004b3cf0(local_20,&local_30,local_24);
        if (local_30 != 0) {
          FUN_00879940(&local_48,local_20,local_24);
          FUN_00cd98b0(param_1[3],local_30,local_48);
        }
        local_24 = local_24 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(local_20);
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  if (*(longlong *)(param_1[0x25] + 0x20) != 0) {
    FUN_00414ad0(param_1 + 4,*(undefined8 *)(param_1[0x25] + 0x20));
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_30);
  return;
}


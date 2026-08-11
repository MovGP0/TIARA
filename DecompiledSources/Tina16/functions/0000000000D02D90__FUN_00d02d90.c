/* Ghidra address: 00d02d90 */
/* Ghidra symbol: FUN_00d02d90 */


undefined1 FUN_00d02d90(longlong param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_11 = 0;
  FUN_0043e1a0(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0xb8));
  iVar2 = (**(code **)PTR_PTR_020018b0)(L"chunked",local_10);
  if (iVar2 < 1) {
    if (*(char *)(*(longlong *)(param_1 + 0xd0) + 0xb0) == '\0') {
      cVar1 = FUN_008b0130(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x70),L"multipart");
      if (cVar1 == '\0') {
        bVar3 = true;
      }
      else {
        bVar3 = (*(ushort *)(*(longlong *)(param_1 + 0xc0) + 0x205) & 0x100) == 0;
      }
    }
    else {
      bVar3 = 0 < *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x48);
    }
  }
  else {
    bVar3 = (*(ushort *)(*(longlong *)(param_1 + 0xc0) + 0x205) & 0x800) == 0;
  }
  if (bVar3) {
    cVar1 = FUN_00879070(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x150),L"HEAD");
    if (cVar1 == '\0') {
      cVar1 = FUN_00879070(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x138),L"HEAD");
      if (cVar1 == '\0') {
        iVar2 = FUN_00d065e0(*(undefined8 *)(param_1 + 0xd0));
        if (iVar2 / 100 != 1) {
          iVar2 = FUN_00d065e0(*(undefined8 *)(param_1 + 0xd0),(longlong)iVar2 % 100 & 0xffffffff);
          if (iVar2 != 0xcc) {
            iVar2 = FUN_00d065e0(*(undefined8 *)(param_1 + 0xd0));
            if (iVar2 != 0x130) {
              iVar2 = FUN_00d065e0(*(undefined8 *)(param_1 + 0xd0));
              if (iVar2 / 100 == 3) {
                local_11 = FUN_00d02d20(param_1,5000);
              }
              else {
                local_11 = 1;
              }
              goto LAB_00d02f5d;
            }
          }
        }
      }
    }
    if ((*(ushort *)(*(longlong *)(param_1 + 0xc0) + 0x205) & 0x20) != 0) {
      local_11 = FUN_00d02d20(param_1,100);
    }
  }
LAB_00d02f5d:
  FUN_00414480(&local_10);
  return local_11;
}


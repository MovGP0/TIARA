/* Ghidra address: 0113c0e0 */
/* Ghidra symbol: FUN_0113c0e0 */


void FUN_0113c0e0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [88];
  undefined8 local_248;
  undefined8 local_240;
  undefined2 local_238 [4];
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [256];
  byte local_118 [264];
  
  local_2b0 = 0;
  local_2a8 = 0;
  local_240 = 0;
  local_248 = 0;
  local_228 = 0;
  local_230 = 0;
  local_220 = 0;
  if (*(char *)(param_1 + 0xa70) != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x960),&local_220);
    FUN_00416910(local_118,local_220,0xff);
    puVar3 = local_218;
    FUN_010c0090(local_118,puVar3,*(undefined1 *)(param_1 + 0xa78));
    if ((byte)(local_118[1] - 0x28) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)puVar3 >> 8),1) << (local_118[1] - 0x28 & 0x1f) &
              0x28U) != 0;
    }
    else {
      bVar4 = false;
    }
    uVar1 = (uint)bVar4;
    if (((*(uint *)(param_1 + 0xa6c) == uVar1) && (local_118[(int)(uVar1 + 1)] == 0x30)) &&
       ((ushort)local_118[(int)(uVar1 + 2)] != *(ushort *)PTR_DAT_020032f8)) {
      FUN_010bfed0(local_118);
    }
    else {
      if (*(int *)(param_1 + 0xa6c) == local_118[0] - 1) {
        FUN_00416780(&local_228,*(undefined2 *)PTR_DAT_020032f8);
        FUN_004169a0(&local_230,local_118);
        iVar2 = FUN_004170c0(local_228,local_230,1);
        if ((int)((uint)local_118[0] - iVar2) < *(int *)(param_1 + 0xa74) + -1) {
          local_238[0] = 0x3001;
          FUN_004152c0(local_238,local_118,0xff,*(int *)(param_1 + 0xa6c) + 2);
          *(int *)(param_1 + 0xa6c) = *(int *)(param_1 + 0xa6c) + 1;
        }
      }
      if (*(int *)(param_1 + 0xa6c) < (int)(local_118[0] - 1)) {
        *(int *)(param_1 + 0xa6c) = *(int *)(param_1 + 0xa6c) + 1;
      }
    }
    if ((ushort)local_118[*(int *)(param_1 + 0xa6c) + 1] == *(ushort *)PTR_DAT_020032f8) {
      *(int *)(param_1 + 0xa6c) = *(int *)(param_1 + 0xa6c) + 1;
    }
    FUN_004154b0(&local_240,local_118,0);
    FUN_004154b0(&local_248,local_218,0);
    FUN_004155b0(&local_240,local_248);
    FUN_00415560(local_118,local_240,0xff);
    if (*(char *)(param_1 + 0xa0c) == '\a') {
      FUN_004169a0(&local_2b0,local_118);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x960),local_2b0);
    }
    else {
      FUN_010c15a0(local_2a0,9,4,local_118);
      FUN_004169a0(&local_2a8,local_2a0);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x960),local_2a8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x290))
              (*(longlong **)(param_1 + 0x960),*(undefined4 *)(param_1 + 0xa6c));
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x288))(*(longlong **)(param_1 + 0x960),1);
  }
  FUN_00414560(&local_2b0,2);
  FUN_00414590(&local_248,2);
  FUN_00414560(&local_230,2);
  FUN_00414480(&local_220);
  return;
}


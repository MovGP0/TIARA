/* Ghidra address: 0113bdc0 */
/* Ghidra symbol: FUN_0113bdc0 */


void FUN_0113bdc0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_290 [88];
  undefined8 local_238;
  undefined8 local_230;
  undefined2 local_228 [4];
  undefined8 local_220;
  undefined1 local_218 [256];
  byte local_118 [264];
  
  local_2a0 = 0;
  local_298 = 0;
  local_230 = 0;
  local_238 = 0;
  local_220 = 0;
  if (*(char *)(param_1 + 0xa70) != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x960),&local_220);
    FUN_00416910(local_118,local_220,0xff);
    FUN_010c0090(local_118,local_218,*(undefined1 *)(param_1 + 0xa78));
    if (*(int *)(param_1 + 0xa6c) < 1) {
      iVar1 = *(int *)(param_1 + 0xa6c) + 1;
      if ((byte)(local_118[iVar1] - 0x28) < 8) {
        bVar3 = ((int)CONCAT71((int7)(int3)((uint)iVar1 >> 8),1) << (local_118[iVar1] - 0x28 & 0x1f)
                & 0x28U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
      local_228[0] = 0x3001;
      FUN_004152c0(local_228,local_118,0xff,uVar2);
    }
    else {
      if ((*(int *)(param_1 + 0xa6c) == local_118[0] - 1) && (local_118[local_118[0]] == 0x30)) {
        FUN_010bff60(local_118);
      }
      *(int *)(param_1 + 0xa6c) = *(int *)(param_1 + 0xa6c) + -1;
    }
    if ((ushort)local_118[*(int *)(param_1 + 0xa6c) + 1] == *(ushort *)PTR_DAT_020032f8) {
      *(int *)(param_1 + 0xa6c) = *(int *)(param_1 + 0xa6c) + -1;
    }
    FUN_004154b0(&local_230,local_118,0);
    FUN_004154b0(&local_238,local_218,0);
    FUN_004155b0(&local_230,local_238);
    FUN_00415560(local_118,local_230,0xff);
    if (*(char *)(param_1 + 0xa0c) == '\a') {
      FUN_004169a0(&local_2a0,local_118);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x960),local_2a0);
    }
    else {
      FUN_010c15a0(local_290,9,4,local_118);
      FUN_004169a0(&local_298,local_290);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x960),local_298);
    }
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x290))
              (*(longlong **)(param_1 + 0x960),*(undefined4 *)(param_1 + 0xa6c));
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x288))(*(longlong **)(param_1 + 0x960),1);
  }
  FUN_00414560(&local_2a0,2);
  FUN_00414590(&local_238,2);
  FUN_00414480(&local_220);
  return;
}


/* Ghidra address: 01503c70 */
/* Ghidra symbol: FUN_01503c70 */


void FUN_01503c70(longlong param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  byte local_19;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_00e1bd30(param_2,param_1 + 0x23);
  if (*param_2 != '\0') {
    FUN_00e1be10(&local_19,&local_28);
    uVar2 = (uint)local_19;
    iVar1 = 0;
    if (-1 < (int)(uVar2 - 1)) {
      do {
        FUN_004169a0(&local_30,local_28 + (longlong)iVar1 * 0x29);
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))
                  (*(longlong **)(param_1 + 0x58),local_30);
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FUN_004095f0(local_28,(uint)local_19 * 0x29);
    FUN_00e1bfa0(&local_19,&local_28);
    uVar2 = (uint)local_19;
    iVar1 = 0;
    if (-1 < (int)(uVar2 - 1)) {
      do {
        FUN_004169a0(&local_38,local_28 + (longlong)iVar1 * 0x29);
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x78))
                  (*(longlong **)(param_1 + 0x60),local_38);
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FUN_004095f0(local_28,(uint)local_19 * 0x29);
    FUN_00e1c1b0(&local_19,&local_28);
    uVar2 = (uint)local_19;
    iVar1 = 0;
    if (-1 < (int)(uVar2 - 1)) {
      do {
        FUN_004169a0(&local_40,local_28 + (longlong)iVar1 * 0x29);
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                  (*(longlong **)(param_1 + 0x68),local_40);
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FUN_004095f0(local_28,(uint)local_19 * 0x29);
    FUN_00e1c740(&local_19,&local_28);
    uVar2 = (uint)local_19;
    iVar1 = 0;
    if (-1 < (int)(uVar2 - 1)) {
      do {
        FUN_004169a0(&local_48,local_28 + (longlong)iVar1 * 0x29);
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                  (*(longlong **)(param_1 + 0x70),local_48);
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FUN_004095f0(local_28,(uint)local_19 * 0x29);
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_00414560(&local_48,4);
  return;
}


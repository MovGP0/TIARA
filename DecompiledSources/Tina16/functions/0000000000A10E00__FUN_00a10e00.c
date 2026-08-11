/* Ghidra address: 00a10e00 */
/* Ghidra symbol: FUN_00a10e00 */


void FUN_00a10e00(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                 longlong param_5,uint *param_6,int param_7)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_48;
  undefined8 local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x260);
  if (*(int *)(lVar2 + 0x48) == 0) {
    uVar4 = 2;
    if (*(uint *)(lVar2 + 0x50) < 2) {
      uVar4 = *(uint *)(lVar2 + 0x50);
    }
    uVar1 = *param_6;
    uVar3 = param_7 - uVar1;
    if (uVar4 <= param_7 - uVar1) {
      uVar3 = uVar4;
    }
    local_48 = *(undefined8 *)(param_5 + (ulonglong)uVar1 * 8);
    if (uVar3 < 2) {
      local_40 = *(undefined8 *)(lVar2 + 0x40);
      *(undefined4 *)(lVar2 + 0x48) = 1;
    }
    else {
      local_40 = *(undefined8 *)(param_5 + (ulonglong)(uVar1 + 1) * 8);
    }
    (**(code **)(lVar2 + 0x18))(param_1,param_2,*param_3,&local_48);
  }
  else {
    FUN_00a1bca0(lVar2 + 0x40,0,param_5 + (ulonglong)*param_6 * 8,0,1,*(undefined4 *)(lVar2 + 0x4c))
    ;
    *(undefined4 *)(lVar2 + 0x48) = 0;
    uVar3 = 1;
  }
  *param_6 = *param_6 + uVar3;
  *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) - uVar3;
  if (*(int *)(lVar2 + 0x48) == 0) {
    *param_3 = *param_3 + 1;
  }
  return;
}


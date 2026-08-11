/* Ghidra address: 0084b6a0 */
/* Ghidra symbol: FUN_0084b6a0 */


int FUN_0084b6a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *local_res10 [3];
  int local_2c;
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  local_2c = 0;
  uVar3 = 0;
  while ((uVar2 = (uint)uVar3, uVar2 < *(uint *)(param_1 + 0x10) && (local_2c == 0))) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + uVar3 * 8);
    if (plVar1 != (longlong *)0x0) {
      iVar4 = 0;
      iVar5 = uVar2 << (*(byte *)(param_1 + 0x16) & 0x1f);
      while ((iVar4 < (int)(uint)*(ushort *)(param_1 + 0x1c) && (local_2c == 0))) {
        if (*plVar1 != 0) {
          local_2c = (**(code **)(*local_res10[0] + 0x18))(local_res10[0],iVar5,*plVar1);
        }
        plVar1 = plVar1 + 1;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 1;
      }
    }
    uVar3 = (ulonglong)(uVar2 + 1);
  }
  FUN_0041b800(local_res10);
  return local_2c;
}


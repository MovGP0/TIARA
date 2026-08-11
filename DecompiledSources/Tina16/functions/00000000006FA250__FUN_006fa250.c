/* Ghidra address: 006fa250 */
/* Ghidra symbol: FUN_006fa250 */


void FUN_006fa250(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  lVar1 = param_1[0x68];
  if ((lVar1 != 0) && ((char)param_1[0x67] == '\0')) {
    iVar3 = FUN_006fa830(param_1);
    cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    FUN_0064fca0(lVar1,0x401,(longlong)iVar3,(longlong)cVar2);
    if (((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) && (*(int *)(param_1[0x68] + 0x534) < 1))
    {
      FUN_006fd900(param_1[0x68]);
      uVar4 = FUN_006fa830(param_1);
      uVar5 = FUN_006fa830(param_1);
      FUN_006fc050(param_1[0x68],0x440,uVar4,uVar5);
      FUN_006fd910(param_1[0x68]);
    }
  }
  return;
}


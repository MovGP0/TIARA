/* Ghidra address: 0070e1a0 */
/* Ghidra symbol: FUN_0070e1a0 */


void FUN_0070e1a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_280;
  undefined8 uStack_278;
  int local_270;
  int local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_256 [510];
  undefined1 local_58 [16];
  byte local_48;
  
  FUN_00786bc0(param_1,param_2);
  iVar2 = FUN_0070cc60();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_0070cc90(param_1,&local_268,iVar3);
      local_280 = local_268;
      uStack_278 = uStack_260;
      local_270 = (int)*(short *)(param_2 + 0x10);
      local_26c = (int)*(short *)(param_2 + 0x12);
      cVar1 = FUN_00423210(&local_280,&local_270);
      if ((cVar1 != '\0') &&
         (FUN_0070cd20(param_1,local_58,iVar3,local_256,0xff), (local_48 & 4) == 4)) {
        if (*(int *)((longlong)param_1 + 0x44) != iVar3) {
          (**(code **)(*param_1 + 0x58))(param_1);
        }
        *(int *)((longlong)param_1 + 0x44) = iVar3;
        return;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0x44)) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}


/* Ghidra address: 01664230 */
/* Ghidra symbol: FUN_01664230 */


void FUN_01664230(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 char param_5)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar5 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_res10[0]);
  if (param_5 == '\0') {
    uVar1 = (**(code **)(*plVar5 + 0x30))(plVar5,L"Analysis Setup",L"ModelCompilationEnabled",1);
    *(undefined1 *)(param_1 + 0xf5) = uVar1;
  }
  else {
    *(undefined1 *)(param_1 + 0xf5) = 0;
  }
  uVar3 = FUN_01b11110();
  uVar4 = (**(code **)(*plVar5 + 0x20))
                    (plVar5,L"Analysis Setup",L"MaxNumberOfThreads",(uVar3 & 0xff) - 1);
  *(undefined4 *)(param_1 + 0xf0) = uVar4;
  uVar1 = (**(code **)(*plVar5 + 0x30))(plVar5,L"Analysis Setup",L"MatrixCompilationEnabled",1);
  *(undefined1 *)(param_1 + 0xf4) = uVar1;
  if (DAT_0210f87c != '\0') {
    cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,L"Analysis Setup",L"SSE2Enabled",1);
    if (cVar2 != '\0') {
      uVar1 = 1;
      goto LAB_01664316;
    }
  }
  uVar1 = 0;
LAB_01664316:
  *(undefined1 *)(param_1 + 0x121) = uVar1;
  FUN_00410f20(plVar5);
  FUN_00414480(local_res10);
  return;
}


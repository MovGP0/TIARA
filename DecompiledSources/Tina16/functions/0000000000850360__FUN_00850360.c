/* Ghidra address: 00850360 */
/* Ghidra symbol: FUN_00850360 */


void FUN_00850360(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined1 *)(param_1 + 0x53b) = 0;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x508) + 0x1a0))(*(longlong **)(param_1 + 0x508),2)
  ;
  *(undefined4 *)(param_1 + 0x518) = uVar3;
  lVar1 = *(longlong *)(param_1 + 0x508);
  pcVar4 = (code *)FUN_00411550(lVar1,0xffa3);
  cVar2 = (*pcVar4)(lVar1,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
  *(char *)(param_1 + 0x530) = cVar2;
  if (cVar2 == '\x02') {
    uVar5 = FUN_0084f210(param_1);
    *(undefined8 *)(param_1 + 0x528) = uVar5;
  }
  FUN_0083e980(param_1);
  return;
}


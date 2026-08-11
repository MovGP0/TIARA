/* Ghidra address: 01463b00 */
/* Ghidra symbol: FUN_01463b00 */


void FUN_01463b00(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x748);
  FUN_00414ad0(lVar1 + 0x100,&DAT_01463c04);
  FUN_00724380(lVar1,L"tinaequ.teq");
  FUN_00414ad0(lVar1 + 0xe0,L"Tina equation (*.teq)|*.teq");
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0xa8))(*(longlong **)(param_1 + 0x748));
  if (cVar3 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x748),local_20);
    if (local_20[0] != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4d8);
      (**(code **)(*plVar2 + 0xd8))(plVar2,local_20[0]);
      FUN_01463140(param_1,1);
    }
    FUN_00724420(*(undefined8 *)(param_1 + 0x748),0);
  }
  FUN_00414480(local_20);
  return;
}


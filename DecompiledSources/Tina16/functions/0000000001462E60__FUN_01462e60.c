/* Ghidra address: 01462e60 */
/* Ghidra symbol: FUN_01462e60 */


void FUN_01462e60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x718);
  FUN_00414ad0(lVar1 + 0x100,&DAT_01462f54);
  FUN_00724380(lVar1,L"tinaequ.jpg");
  FUN_00414ad0(lVar1 + 0xe0,L"JPEG file (*.jpg)|*.jpg");
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0xa8))(*(longlong **)(param_1 + 0x718));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x718),local_20);
    if (local_20[0] != 0) {
      (**(code **)(*param_2 + 0xb0))(param_2,local_20[0]);
    }
    FUN_00724420(*(undefined8 *)(param_1 + 0x718),0);
  }
  FUN_00414480(local_20);
  return;
}


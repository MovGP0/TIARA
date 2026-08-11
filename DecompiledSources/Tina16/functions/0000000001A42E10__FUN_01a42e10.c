/* Ghidra address: 01a42e10 */
/* Ghidra symbol: FUN_01a42e10 */


void FUN_01a42e10(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(undefined4 *)(param_1 + 0x944) = 0;
  if (*(char *)(param_1 + 0x2b40) != '\0') {
    FUN_01a43010(param_1,0);
    if (param_2 != '\0') {
      FUN_01b25c70(*(undefined4 *)(param_1 + 0x7c8),param_1 + 0x2b40);
    }
    FUN_01a403d0(param_1);
    FUN_01a42d80(param_1);
    FUN_01a40b80(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x90))(*(longlong **)(param_1 + 0x8c8));
    (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x90))(*(longlong **)(param_1 + 0x8c0));
    thunk_FUN_0419965d(100);
    FUN_01a3ea70(param_1);
    FUN_00416cd0(local_20,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a42fa4,L"answer_done.txt");
    cVar1 = FUN_00440a20(local_20[0],1);
    if (cVar1 != '\0') {
      FUN_004412f0(local_20[0]);
    }
    FUN_00416cd0(local_20,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a42fa4,L"errors.txt");
    cVar1 = FUN_00440a20(local_20[0],1);
    if (cVar1 != '\0') {
      FUN_004412f0(local_20[0]);
    }
    thunk_FUN_0419965d(100);
  }
  FUN_00414480(local_20);
  return;
}


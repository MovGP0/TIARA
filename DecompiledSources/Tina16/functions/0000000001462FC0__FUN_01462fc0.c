/* Ghidra address: 01462fc0 */
/* Ghidra symbol: FUN_01462fc0 */


void FUN_01462fc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  lVar1 = *(longlong *)(param_1 + 0x718);
  FUN_00414ad0(lVar1 + 0x100,&DAT_014630d4);
  FUN_00724380(lVar1,L"tinaequ.svg");
  FUN_00414ad0(lVar1 + 0xe0,L"SVG file (*.svg)|*.svg");
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0xa8))(*(longlong **)(param_1 + 0x718));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x718),local_20);
    if (local_20[0] != 0) {
      FUN_00c7cd60(local_res10[0],local_20[0],2);
    }
    FUN_00724420(*(undefined8 *)(param_1 + 0x718),0);
  }
  FUN_00414480(local_20);
  FUN_0041b800(local_res10);
  return;
}


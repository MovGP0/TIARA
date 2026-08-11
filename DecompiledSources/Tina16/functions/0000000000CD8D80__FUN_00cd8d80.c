/* Ghidra address: 00cd8d80 */
/* Ghidra symbol: FUN_00cd8d80 */


void FUN_00cd8d80(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  puVar1 = auStack_58;
  if (param_3 != (longlong *)0x0) {
    FUN_004b3260(param_3);
    local_c = 0;
    while( true ) {
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      if (iVar3 <= local_c) break;
      FUN_00cd91c0(param_1,&local_28,local_c);
      cVar2 = FUN_00879070(param_2,local_28);
      if (cVar2 == '\0') {
        FUN_00cd94d0(param_1,&local_c);
      }
      else {
        FUN_00cd92b0(param_1,&local_30,&local_c);
        (**(code **)(*param_3 + 0x78))(param_3,local_30);
      }
    }
    FUN_004b3390(param_3);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00414560(&local_30,2);
  return;
}


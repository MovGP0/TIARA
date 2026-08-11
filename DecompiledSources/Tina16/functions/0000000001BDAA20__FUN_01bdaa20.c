/* Ghidra address: 01bdaa20 */
/* Ghidra symbol: FUN_01bdaa20 */


undefined4 FUN_01bdaa20(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30 = *param_2;
  uStack_28 = param_2[1];
  uStack_20 = param_2[2];
  FUN_0046bd60(&local_30);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  thunk_FUN_04125dff(param_3);
  *(undefined2 *)param_3 = 3;
  FUN_004685b0(&local_50,0,1);
  cVar2 = FUN_0046f320(&local_30,&local_50);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_3 + 1) = 0xc;
  }
  else {
    cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_01bee940);
    if (cVar2 == '\0') {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x80);
      if (lVar1 != 0) {
        cVar2 = FUN_004113d0(*(undefined8 *)(lVar1 + 0x78),&PTR_FUN_01bdee40);
        if (cVar2 != '\0') {
          *(undefined4 *)(param_3 + 1) = 0xb;
          goto code_r0x01bdab11;
        }
      }
      *(undefined4 *)(param_3 + 1) = 0xc;
    }
    else {
      *(undefined4 *)(param_3 + 1) = 2;
    }
  }
code_r0x01bdab11:
  FUN_00460ba0(&local_50);
  FUN_00460ba0(&local_30);
  return 0;
}


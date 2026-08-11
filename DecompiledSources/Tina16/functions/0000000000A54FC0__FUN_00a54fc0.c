/* Ghidra address: 00a54fc0 */
/* Ghidra symbol: FUN_00a54fc0 */


void FUN_00a54fc0(longlong param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  cVar1 = FUN_0046c390(param_1 + 0x5b8);
  if (cVar1 == '\0') {
LAB_00a5503d:
    uVar2 = 0;
  }
  else {
    FUN_00468a10(&local_30,L"always");
    cVar1 = FUN_0046f320(param_1 + 0x5b8,&local_30);
    if (cVar1 == '\0') goto LAB_00a5503d;
    uVar2 = 1;
  }
  *param_2 = uVar2;
  cVar1 = FUN_0046c390(param_1 + 0x5d0);
  if (cVar1 == '\0') {
LAB_00a55085:
    uVar2 = 0;
  }
  else {
    FUN_00468a10(&local_48,L"always");
    cVar1 = FUN_0046f320(param_1 + 0x5d0,&local_48);
    if (cVar1 == '\0') goto LAB_00a55085;
    uVar2 = 1;
  }
  *param_3 = uVar2;
  cVar1 = FUN_0046c390(param_1 + 0x5e8);
  if (cVar1 != '\0') {
    FUN_00468a10(&local_60,L"avoid");
    cVar1 = FUN_0046f320(param_1 + 0x5e8,&local_60);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_00a550d3;
    }
  }
  uVar2 = 0;
LAB_00a550d3:
  *param_4 = uVar2;
  FUN_00417840(&local_60,&DAT_004013d8,3);
  return;
}


/* Ghidra address: 01690110 */
/* Ghidra symbol: FUN_01690110 */


void FUN_01690110(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  double dVar3;
  int local_2b4;
  undefined2 *local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [392];
  undefined1 local_118 [192];
  double local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  byte local_2e;
  
  FUN_016ebb00(param_1,1,local_118,0xc0);
  FUN_01690a80(local_118,local_2a0,&local_2a8,&local_2b4);
  if (*(char *)(param_2 + 0x339) == '\0') {
    local_2e = 0;
  }
  else {
    local_2e = FUN_016eacf0(param_1,9,6);
  }
  cVar1 = FUN_016eacf0(param_1,3,2);
  local_58 = (double)FUN_016eb0a0(param_1,4);
  local_58 = local_58 + 273.15;
  if (cVar1 == '\0') {
    dVar3 = (double)FUN_016ed770(param_2);
    local_58 = local_58 + dVar3;
  }
  local_50 = FUN_016eb0a0(param_1,5);
  cVar1 = FUN_016eacf0(param_1,6,2);
  local_48 = cVar1 != '\0';
  local_40 = FUN_016ea920(param_1,7,2,&local_30);
  local_38 = FUN_016ea920(param_1,8,2,&local_2f);
  FUN_016ee260(param_1,&local_2b0,0x2a8,0);
  *local_2b0 = (short)param_3;
  if (local_2e < 3) {
    cVar1 = FUN_01d44bc0(*(undefined1 *)(param_2 + 0xed6));
    if (cVar1 == '\0') {
      cVar1 = FUN_016e9de0(param_1,4);
      if (cVar1 == '\0') {
        uVar2 = 0xff;
      }
      else {
        uVar2 = 4;
      }
      FUN_0168e690(param_1,param_2,param_3,1,2,3,uVar2,&local_58,local_2a0,local_2a8,local_2b0);
    }
    else {
      cVar1 = FUN_016e9de0(param_1,4);
      if (cVar1 == '\0') {
        uVar2 = 0xff;
      }
      else {
        uVar2 = 4;
      }
      FUN_0168d1c0(param_1,param_2,param_3,1,2,3,uVar2,&local_58,local_2a0,local_2a8,local_2b0);
    }
    FUN_016e9f40(param_1,FUN_0168f9e0);
    if (*(char *)(param_2 + 0xed6) == '\0') {
      FUN_016e9f60(param_1,FUN_01684670);
      FUN_016e9f70(param_1,FUN_016848c0);
      FUN_016e9fa0(param_1,FUN_01686d30);
    }
    FUN_016e9fb0(param_1,FUN_01685040);
    FUN_016e9ff0(param_1,FUN_01683f20);
    FUN_016ea040(param_1,FUN_01684500);
  }
  else if ((byte)(local_2e - 3) < 2) {
    FUN_01685b60(param_1,1,2,3,&local_58,local_118,local_2b0);
    FUN_016e9f40(param_1,FUN_01686380);
  }
  else if (local_2e == 5) {
    FUN_01685b60(param_1,1,2,3,&local_58,local_118,local_2b0);
  }
  FUN_004095f0(local_2a8,(longlong)local_2b4);
  return;
}


/* Ghidra address: 014162e0 */
/* Ghidra symbol: FUN_014162e0 */


void FUN_014162e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_00416db0(local_res10[0],L"text");
  if (iVar2 == 0) {
    FUN_00724350(*(undefined8 *)(param_1 + 0x6c8),&local_10);
    FUN_00416ba0(param_1 + 0x790,local_10,L"\\linux.text");
    cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0x790),1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x7c8) = 1;
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),*(undefined8 *)(param_1 + 0x790));
    }
  }
  else {
    iVar2 = FUN_00416db0(local_res10[0],L"data");
    if (iVar2 == 0) {
      FUN_00724350(*(undefined8 *)(param_1 + 0x6c8),&local_18);
      FUN_00416ba0(param_1 + 0x798,local_18,L"\\linux.data");
      cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0x798),1);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x7c9) = 1;
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x798));
      }
    }
    else {
      iVar2 = FUN_00416db0(local_res10[0],L"romfs");
      if (iVar2 == 0) {
        FUN_00724350(*(undefined8 *)(param_1 + 0x6c8),&local_20);
        FUN_00416ba0(param_1 + 0x7a0,local_20,L"\\romfs.img");
        cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0x7a0),1);
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0x7ca) = 1;
          FUN_0064de00(*(undefined8 *)(param_1 + 0x700),*(undefined8 *)(param_1 + 0x7a0));
        }
      }
      else {
        iVar2 = FUN_00416db0(local_res10[0],L"readelf");
        if (iVar2 == 0) {
          FUN_00724350(*(undefined8 *)(param_1 + 0x6c8),&local_28);
          FUN_00416ba0(param_1 + 0x7a8,local_28,L"\\readelf.txt");
          cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0x7a8),1);
          if (cVar1 != '\0') {
            *(undefined1 *)(param_1 + 0x7cb) = 1;
            FUN_0064de00(*(undefined8 *)(param_1 + 0x708),*(undefined8 *)(param_1 + 0x7a8));
          }
        }
        else {
          iVar2 = FUN_00416db0(local_res10[0],L"config");
          if (iVar2 == 0) {
            FUN_00724350(*(undefined8 *)(param_1 + 0x6c8),&local_30);
            FUN_00416ba0(param_1 + 0x7b0,local_30,L"\\config.linux");
            cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0x7b0),1);
            if (cVar1 != '\0') {
              *(undefined1 *)(param_1 + 0x7cc) = 1;
              FUN_0064de00(*(undefined8 *)(param_1 + 0x740),*(undefined8 *)(param_1 + 0x7b0));
            }
          }
        }
      }
    }
  }
  FUN_00414560(&local_30,5);
  FUN_00414480(local_res10);
  return;
}


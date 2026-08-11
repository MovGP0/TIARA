/* Ghidra address: 0095ba80 */
/* Ghidra symbol: FUN_0095ba80 */


void FUN_0095ba80(undefined8 param_1,byte *param_2,char *param_3)

{
  undefined1 auStack_68 [32];
  char *local_48;
  undefined1 *local_30;
  byte local_19;
  longlong local_18;
  longlong local_10;
  
  local_30 = auStack_68;
  FUN_0095a320(auStack_68,param_2,param_3);
  if (*param_3 != '\0') {
    FUN_0095a6a0(auStack_68,&local_19,param_3);
    *param_2 = *param_2 & local_19;
    if (*param_3 != '\0') {
      local_10 = FUN_00410e60(&PTR_FUN_008f5158,1);
      FUN_008f9470(local_10,1);
      *(undefined1 *)(local_10 + 0x10) = 2;
      local_18 = FUN_00410e60(&PTR_FUN_008f5158,1);
      FUN_008f9470(local_18,1);
      *(undefined1 *)(local_18 + 0x10) = 2;
      local_48 = param_3;
      FUN_0095aa20(auStack_68,local_10,local_18,&local_19);
      *param_2 = *param_2 & local_19;
      if (*param_3 == '\0') {
        FUN_0095bba0(0,local_30);
      }
      else {
        FUN_00410f20(local_10);
        FUN_00410f20(local_18);
      }
    }
  }
  return;
}


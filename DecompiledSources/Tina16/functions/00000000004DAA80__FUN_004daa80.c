/* Ghidra address: 004daa80 */
/* Ghidra symbol: FUN_004daa80 */


undefined8 FUN_004daa80(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_50 [2];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = 0;
  local_20 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  FUN_0041b800(param_2);
  FUN_0041b800(&local_38);
  uVar3 = FUN_0041b800(&local_20);
  cVar1 = FUN_004e3210(*(undefined8 *)(param_1 + 8),param_3,uVar3);
  if ((cVar1 != '\0') && (iVar2 = (**(code **)(*local_20 + 0x28))(), -1 < iVar2 + -1)) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_40,0);
      FUN_0041b800(&local_28);
      cVar1 = FUN_00452340(local_40,&DAT_004dac94);
      if (cVar1 != '\0') {
        FUN_0041b840(&local_38,local_28);
        cVar1 = (**(code **)(*local_28 + 0x20))(local_28);
        if (cVar1 != '\0') {
          FUN_0041b800(&local_30);
          cVar1 = FUN_00452340(local_28,&DAT_004daca4);
          if ((cVar1 != '\0') && (cVar1 = (**(code **)(*local_30 + 0x78))(local_30), cVar1 == '\0'))
          {
            FUN_0041b840(param_2,local_28);
            goto LAB_004dac04;
          }
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_38 == 0) {
    local_48 = 0;
    local_50[0] = param_3;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00485650,1,PTR_PTR_02001dc8,local_50,0);
    FUN_004134c0(uVar3);
  }
  else {
    FUN_0041b840(param_2,local_38);
  }
LAB_004dac04:
  FUN_00417840(&local_40,&DAT_004033c8,2);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  return param_2;
}


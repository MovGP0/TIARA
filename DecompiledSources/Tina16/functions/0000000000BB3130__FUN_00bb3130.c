/* Ghidra address: 00bb3130 */
/* Ghidra symbol: FUN_00bb3130 */


void FUN_00bb3130(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_48 = 0;
  local_40 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_20 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  cVar1 = FUN_00baeff0(param_1);
  if (cVar1 != '\0') {
    iVar3 = 0;
    while( true ) {
      FUN_00baec70(param_1,&local_40);
      iVar2 = (**(code **)(*local_40 + 0x18))(local_40);
      if (iVar2 <= iVar3) break;
      FUN_00baec70(param_1,&local_28);
      (**(code **)(*local_28 + 0x20))(local_28,&local_20,iVar3);
      cVar1 = (**(code **)(*local_20 + 0x48))(local_20);
      if (cVar1 == '\x01') {
        FUN_00baec70(param_1,&local_30);
        (**(code **)(*local_30 + 0x40))(local_30,iVar3,param_2);
        FUN_00baec70(param_1,&local_38);
        (**(code **)(*local_38 + 0x50))(local_38,iVar3 + 1);
        goto LAB_00bb3238;
      }
      iVar3 = iVar3 + 1;
    }
  }
  FUN_00bae3c0(param_1,&local_48,param_2);
LAB_00bb3238:
  FUN_0041b800(&local_48);
  FUN_00417840(&local_40,&DAT_00b9f960,4);
  FUN_0041b800(&local_20);
  return;
}


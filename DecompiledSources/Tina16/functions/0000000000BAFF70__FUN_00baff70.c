/* Ghidra address: 00baff70 */
/* Ghidra symbol: FUN_00baff70 */


undefined8 FUN_00baff70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  FUN_0041b800(param_2);
  cVar1 = FUN_00bae3b0(param_1);
  if (cVar1 != '\0') {
    iVar3 = 0;
    while( true ) {
      FUN_00baec20(param_1,&local_48);
      iVar2 = (**(code **)(*local_48 + 0x18))(local_48);
      if (iVar2 <= iVar3) break;
      FUN_00baec20(param_1,&local_30);
      (**(code **)(*local_30 + 0x20))(local_30,&local_28,iVar3);
      (**(code **)(*local_28 + 0x40))(local_28,&local_20);
      iVar2 = FUN_00416db0(local_20,param_3);
      if (iVar2 == 0) {
        FUN_00baec20(param_1,&local_40);
        (**(code **)(*local_40 + 0x20))(local_40,&local_38,iVar3);
        FUN_0041b890(param_2,local_38,&DAT_00bb0120);
        break;
      }
      iVar3 = iVar3 + 1;
    }
  }
  FUN_00417840(&local_48,&DAT_00b9f9a0,2);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_00414480(&local_20);
  return param_2;
}


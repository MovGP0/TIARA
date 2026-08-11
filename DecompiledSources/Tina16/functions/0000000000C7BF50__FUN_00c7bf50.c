/* Ghidra address: 00c7bf50 */
/* Ghidra symbol: FUN_00c7bf50 */


undefined8 * FUN_00c7bf50(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *local_res10;
  undefined8 local_res18 [2];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_58 = 0;
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_30 = 0;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_20 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_00414610(local_res18[0]);
  iVar3 = 0;
  while( true ) {
    (**(code **)(*local_res10 + 0x20))(local_res10,&local_48);
    iVar2 = (**(code **)(*local_48 + 0x18))(local_48);
    if (iVar2 <= iVar3) break;
    (**(code **)(*local_res10 + 0x20))(local_res10,&local_28);
    (**(code **)(*local_28 + 0x20))(local_28,&local_20,iVar3);
    cVar1 = (**(code **)(*local_20 + 0x48))(local_20);
    if (cVar1 == '\x03') {
      (**(code **)(*local_res10 + 0x20))(local_res10,&local_40);
      (**(code **)(*local_40 + 0x20))(local_40,&local_38,iVar3);
      (**(code **)(*local_res10 + 0x90))(local_res10,&local_30,local_38);
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  FUN_00c7bc70(&local_50,local_res10);
  (**(code **)(*local_50 + 0x160))(local_50,param_1,local_res18[0]);
  (**(code **)(*local_res10 + 0x98))(local_res10,&local_58,*param_1);
  FUN_0041b800(&local_58);
  FUN_0041b800(&local_50);
  FUN_00417840(&local_48,&DAT_00b9f960,2);
  FUN_00417840(&local_38,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_res10);
  FUN_00414480(local_res18);
  return param_1;
}


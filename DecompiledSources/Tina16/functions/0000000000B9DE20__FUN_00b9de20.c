/* Ghidra address: 00b9de20 */
/* Ghidra symbol: FUN_00b9de20 */


undefined8 FUN_00b9de20(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *local_res18 [2];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_48 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_30[0] = (longlong *)0x0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  FUN_0041b800(param_2);
  if (local_res18[0] != (longlong *)0x0) {
    (**(code **)(*local_res18[0] + 0x20))(local_res18[0],local_30);
    iVar2 = (**(code **)(*local_30[0] + 0x18))();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_res18[0] + 0x20))(local_res18[0],&local_40);
        (**(code **)(*local_40 + 0x20))(local_40,&local_38,iVar3);
        cVar1 = (**(code **)(*local_38 + 0x48))(local_38);
        if (cVar1 == '\x03') {
          (**(code **)(*local_res18[0] + 0x20))(local_res18[0],&local_48);
          (**(code **)(*local_48 + 0x20))(local_48,param_2,iVar3);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00417840(&local_48,&DAT_00b9f960,2);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  FUN_0041b800(local_res18);
  return param_2;
}


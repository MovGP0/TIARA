/* Ghidra address: 0060d880 */
/* Ghidra symbol: FUN_0060d880 */


longlong FUN_0060d880(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar2 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  FUN_00601d70(local_res8,0);
  if (DAT_02011f90 == (longlong *)0x0) {
    local_48 = FUN_0041b800(&DAT_02011f90);
    thunk_FUN_041d73d1(PTR_DAT_02003e58,0,5,&DAT_0060d9a0);
  }
  else {
    (**(code **)(*DAT_02011f90 + 8))(DAT_02011f90);
  }
  puVar1 = (undefined8 *)(PTR_DAT_02001eb0 + 8);
  *(undefined8 *)(local_res8 + 0x6c) = *(undefined8 *)PTR_DAT_02001eb0;
  *(undefined8 *)(local_res8 + 0x74) = *puVar1;
  *(undefined1 *)(local_res8 + 0x68) = 0;
  uVar3 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar3;
  *(undefined1 *)(local_res8 + 0x7c) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


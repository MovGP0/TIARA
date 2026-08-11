/* Ghidra address: 0096cdc0 */
/* Ghidra symbol: FUN_0096cdc0 */


longlong FUN_0096cdc0(longlong param_1,char param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_009669b0(local_res8,0,param_3,param_4);
  FUN_009669a0(*(undefined8 *)(local_res8 + 0x90),0);
  if (*(char *)(param_3 + 0x121) == '\0') {
    if (*(byte *)(param_3 + 0x120) < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) <<
               (*(byte *)(param_3 + 0x120) & 0x1f) & 0xeU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      cVar2 = FUN_00948910(*(undefined8 *)(param_3 + 0x138));
      if (cVar2 == '\0') {
        *(undefined1 *)(local_res8 + 0x58) = 4;
        *(undefined1 *)(local_res8 + 0x48) = 0x9d;
      }
      else {
        *(undefined1 *)(local_res8 + 0x58) = 0xc;
        *(undefined1 *)(local_res8 + 0x48) = 0;
      }
      goto LAB_0096ce99;
    }
  }
  *(undefined1 *)(local_res8 + 0x58) = 4;
  *(undefined1 *)(local_res8 + 0x48) = 0x4b;
LAB_0096ce99:
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


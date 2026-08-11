/* Ghidra address: 018ad880 */
/* Ghidra symbol: FUN_018ad880 */


void FUN_018ad880(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)(param_1 + 0x589);
  if (cVar1 == '\0') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x4c8) + 0x31c) = 0x21;
  }
  else if (cVar1 == '\x01') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x4c8) + 0x31c) = 0x1f;
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x4c8) + 0x31c) = 0x20;
  }
  if (*(char *)(param_1 + 0x589) == '\x01') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x500) + 0x4e8);
    *(undefined8 *)(lVar2 + 0x608) = 0;
    *(undefined8 *)(lVar2 + 0x610) = 0;
    FUN_006e1e40(lVar2,1);
  }
  else if (*(char *)(param_1 + 0x589) == '\x02') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x500) + 0x4e8);
    *(longlong *)(lVar2 + 0x610) = param_1;
    *(code **)(lVar2 + 0x608) = FUN_018ad810;
    FUN_006e1e40(lVar2,0x18ad801);
  }
  else {
    FUN_006ded30(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x500) + 0x4e8) + 0x550));
    FUN_018abf10(param_1);
  }
  return;
}


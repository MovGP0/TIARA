/* Ghidra address: 017cc7e0 */
/* Ghidra symbol: FUN_017cc7e0 */


void FUN_017cc7e0(void)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  (**(code **)*DAT_02110100)(DAT_02110100);
  if (*(longlong *)PTR_DAT_02005188 != 0) {
    cVar1 = FUN_01cc6030(*(undefined8 *)PTR_DAT_02005188);
    if (cVar1 != '\0') {
      *(undefined8 *)PTR_DAT_02005188 = 0;
    }
  }
  if (*(longlong *)PTR_DAT_02004fb8 != 0) {
    cVar1 = FUN_01cc6030(*(undefined8 *)PTR_DAT_02004fb8);
    if (cVar1 != '\0') {
      *(undefined8 *)PTR_DAT_02004fb8 = 0;
    }
  }
  if (*(longlong *)PTR_DAT_020038e8 != 0) {
    cVar1 = FUN_01cc6030(*(undefined8 *)PTR_DAT_020038e8);
    if (cVar1 != '\0') {
      *(undefined8 *)PTR_DAT_020038e8 = 0;
    }
  }
  *(undefined8 *)PTR_DAT_02001288 = 0;
  (**(code **)(*DAT_02110100 + 8))(DAT_02110100);
  return;
}

